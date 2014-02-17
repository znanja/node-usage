#ifndef SOLARIS_H
#define SOLARIS_H

#include <stdlib.h>
#include <procfs.h>
#include <string.h>
#include <node.h>
#include <uv.h>
#include "nan.h"

typedef struct ps_usage {
    float cpu;
    long memory;
} ps_usage_t;

using namespace v8;
struct UsageData {

    int pid;
    NanCallback *callback;
    ps_usage_t ps_usage;
    bool failed;
};

extern int get_usage(int pid, ps_usage_t* ps_usage);
extern NAN_METHOD(GetUsage);

#endif