#ifndef COMMENTS_H_
#define COMMENTS_H_
#include <iostream>
using namespace std;

extern void strip_comments(string *line, bool *in_comment);
extern void strip_single_line(string *line);
extern bool strip_multiline(string *line, bool *in_comment);

#endif