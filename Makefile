vfork:vfork.c
	@gcc -o vfork vfork.c

.PHONY:clean
clean:
	@rm -f vfork
