#ifndef MAIN_H
#define MAIN_H

/**
 * File: main.h
 * Description: header file with prototypes for all functions
 */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_context);
int append_text_to_file(const char *filename, char *text_context);

#endif /* MAIN_H*/
