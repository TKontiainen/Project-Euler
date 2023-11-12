#!/bin/bash

for d in ~/project-euler/problems/*/ ; do
    gcc -o $d/solution $d/solution.c -O3
done
