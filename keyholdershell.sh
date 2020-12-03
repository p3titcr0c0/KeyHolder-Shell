#! /bin/sh
sudo gcc main.c -o execute
if [ $# -eq 1 ]; then
    if [ $1 = "-noslide" ]; then
        ./execute -noslide
    else
    	echo "Mauvaise utilisation du programme"
	fi
else
	./execute
fi