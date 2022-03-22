#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <readline/readline.h>
#include <readline/history.h>

int main (int argc, char **argv)
{
	char *buf;
	char *user;
	char *host;
	char *logo;
	char *prompt;

	user = getenv("USER");
	host = getenv("NAME");
	logo = "🧩test $>";
	prompt = malloc (strlen(user) + strlen(host) + strlen(logo) + 5);
	prompt = strcat(strcat(strcat(strcat(prompt, user), "@"), host), logo);
	if (argc > 1 && argv[1])
	{
		//rl_bind_key('\t', rl_insert);
	}
	while (buf != NULL)
	{
		if (buf)
		{
			add_history(buf);
		}
		buf = readline(prompt);
		printf("%s", buf);
		free(buf);
	}
	free(prompt);
	return (0);
}
