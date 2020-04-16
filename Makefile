#make file - this is a comment section

#CC=/volume/hab/Linux/Ubuntu-12.04/x86_64/gcc/jnpr/4.2.1/x86_64-unknown-linux-gnu.11/bin/gcc
all:
	gcc -c \
        sample_uninit.c 
clean:
	rm -rf *.o
