
all: ex2

ex2: ex2.c
	gcc ex2.c -o ex2 -g

handin: clean
	@if [ `git status --porcelain| wc -l` != 0 ] ; then echo "\n\n\n\n\t\tWARNING: YOU HAVE UNCOMMITTED CHANGES\n\n    Consider committing any pending changes and rerunning make handin.\n\n\n\n"; fi
	git tag -f -a handin -m "Lab 0 Handin"
	git push --tags handin


clean:
	rm ex2 
