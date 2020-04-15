#make file - this is a comment section

all:
    gcc -c \
        sample_uninit.c 
          
clean:
    rm -rf *.o
