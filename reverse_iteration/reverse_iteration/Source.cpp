#include <iostream>

int main()
{
	char line[1000];
	char word[100];

	std::cout << "Input sentence\n";
	gets_s(line);

	int lengtOfLine = strlen(line) - 1;
	int j = 0;

	/*find & reverse last word*/
	for (int i = lengtOfLine; line[i] != ' ' && line[i] != '\t'; i--)
	{
		word[j] = line[i];
		j++;
	}
	word[j] = '\0';

	/*make shorter line (line - word)*/
	j = lengtOfLine - strlen(word);
	for (int i = 0; i <= j; i++)
	{
		line[i] = line[i];
	}
	line[j + 1] = '\0';

	std::cout << strcat(line, word) << std::endl;
	system("pause");
}