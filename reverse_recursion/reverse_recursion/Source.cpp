#include <iostream>

char line[1000];
char word[100];
int j = 0;
int i;

int recursion(int);
int recursion_2(int i);

int main()
{
	std::cout << "Input sentence\n";
	gets_s(line);

	int lengtOfLine = strlen(line) - 1;
	
	/*find & reverse last word*/
	recursion(lengtOfLine);

	/*make shorter line (line - word)*/
	j = lengtOfLine - strlen(word);
	i = 0;
	recursion_2(i);

	std::cout << strcat(line, word) << std::endl;
	system("pause");
}

int recursion(int i) {
	if (line[i] != ' ' && line[i] != '\t')
	{
		word[j] = line[i];
		j++;
		recursion(i - 1);
	}
	word[j] = '\0';
}

int recursion_2(int i) {
	if (i <= j)
	{
		line[i] = line[i];
		recursion_2(i + 1);
	}
	line[j + 1] = '\0';
}