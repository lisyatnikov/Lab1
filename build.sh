#!/bin/bash

g++ -c -o main1.o main1.cpp
g++ -c -o task1.o task1.cpp
g++ -o main.exe main1.o task1.o