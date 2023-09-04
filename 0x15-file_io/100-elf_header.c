#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void assess_elf(unsigned char *e_ident);
void output_magic(unsigned char *e_ident);
void output_class(unsigned char *e_ident);
void output_data(unsigned char *e_ident);
void output_version(unsigned char *e_ident);
void output_abi(unsigned char *e_ident);
void output_osabi(unsigned char *e_ident);
void output_type(unsigned int e_type, unsigned char *e_ident);
void output_start(unsigned long int e_entry, unsigned char *e_ident);
void shut_elf(int elf);

/**
 * assess_elf - determines if a file is an ELF file
 * @e_ident: Pointer to an array
 *
 * Description: If file is not an ELF file, exit code is 98
 */
void assess_elf(unsigned char *e_ident)
{
	int guide;

	for (guide = 0; guide < 4; guide++)
	{
		if (e_ident[guide] != 127 &&
		    e_ident[guide] != 'E' &&
		    e_ident[guide] != 'L' &&
		    e_ident[guide] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * output_magic - Outputs magic numbers of an ELF header
 * @e_ident: Points to array with ELF magic numbers
 *
 * Description: The magic number are seperated by spaces
 */
void output_magic(unsigned char *e_ident)
{
	int guide;

	printf("  Magic:  ");

	for (guide = 0; guide < EI_NIDENT; guide++)
	{
		printf("%02x", e_ident[guide]);

		if (guide == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * output_class - Outputs class of ELF header
 * @e_ident: Points to array with ELF class
 */
void output_class(unsigned char *e_ident)
{
	printf("  Class:       ");

	switch (e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x\n", e_ident[EI_CLASS]);
	}
}

/**
 * output_data - Outputs the data of an ELF header
 * @e_ident: Points to array with ELF class
 */
void output_data(unsigned char *e_ident)
{
	printf("  Data:                   ");

	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's 2's compliment, small endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's compliment, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * output_version - Outputs the version of an ELF header
 * @e_ident: Points to array with ELF version
 */
void output_version(unsigned char *e_ident)
{
	printf("  version:                    %d",
	      e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}

/**
 * output_osabi - ouptuts the OS/ABI of ELF header
 * @e_ident: Points to array with ELF version
 */
void output_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                     ");

	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - Irix\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		default:
			printf("<unknown: %x\n", e_ident[EI_OSABI]);
	}
}

/**
 * output_abi - Outputs the ABI version of ELF header
 * @e_ident: Points to array with ELF ABI version
 */
void output_abi(unsigned char *e_ident)
{
	printf("  ABI Version:           %d\n",
	      e_ident[EI_ABIVERSION]);
}

/**
 * output_type - outputs type of ELF header
 * @e_ident: points to array with ELF class
 * @e_type: ELF type
 */
void output_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                          ");

	switch (e_type)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x\n", e_type);
	}
}

/**
 * output_start - outputs entry of ELF header
 * @e_entry: Address of ELF entry point
 * @e_ident: Points to array with ELF class
 */
void output_start(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:                      ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}

/**
 * shut_elf - Closes an ELF file
 * @elf: File descriptor of ELF file
 *
 * Description: if file can't be closed, exit code 98
 */
void shut_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - Displays information in the
 *        ELF header at the start of ELF file
 * @argc: number of arguments passed to the program
 * @argv: array of pointers to the arguments.
 *
 * Return: 0 if success
 *
 * Description: If file is not ELF File or
 *              function fails, exit code 98.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *head;
	int x, y;

	x = open(argv[1], O_RDONLY);
	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	head = malloc(sizeof(Elf64_Ehdr));
	if (head == NULL)
	{
		shut_elf(x);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	y = read(x, head, sizeof(Elf64_Ehdr));
	if (y == -1)
	{
		free(head);
		shut_elf(x);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	assess_elf(head->e_ident);
	printf("ELF Head:\n");
	output_magic(head->e_ident);
	output_class(head->e_ident);
	output_data(head->e_ident);
	output_version(head->e_ident);
	output_osabi(head->e_ident);
	output_abi(head->e_ident);
	output_type(head->e_type, head->e_ident);
	output_start(head->e_entry, head->e_ident);

	free(head);
	shut_elf(x);
	return (0);
}
