#!/bin/bash
export LD_PRELOAD=./libinject.so
./gm "$@"
