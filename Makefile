all: save

save:
	git add .
	git commit -m"$(MSG)"
	git pull &
	git push
