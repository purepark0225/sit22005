#include <iostream>
 
int main()
{
	char input_buf[100];
	char codex[52] = 
	                {'a', 'b', 'c', 'd', 'e',
	                 'f', 'g', 'h', 'i', 'j',
	                 'k', 'l', 'm', 'n', 'o',
	                 'p', 'q', 'r', 's', 't', 
	                 'u', 'v', 'w', 'x', 'y', 'z',
	                 'A', 'B', 'C', 'D', 'E',
	                 'F', 'G', 'H', 'I', 'J',
	                 'K', 'L', 'M', 'N', 'O',
	                 'P', 'Q', 'R', 'S', 'T', 
	                 'U', 'V', 'W', 'X', 'Y', 'Z'};                 

	// Get char string from console after executing following code,
	// input_buf will contain the string data, and the input
	std::cin.getline(input_buf, 100);
 
	int inx = 0;
	int index = 0;

	while(input_buf[inx] != '\0')
	{
	
        if(input_buf[inx] >= 'a' && input_buf[inx] <= 'z')
        {
        	index = input_buf[inx] - 'a';

        	if(index < 13)
        	{
        		input_buf[inx] = codex[index+13];
        	}
        	else if(index >= 13)
        	{
        		input_buf[inx] = codex[index-13];
        	}
        }

       	if(input_buf[inx] >= 'A' && input_buf[inx] <= 'Z')
       	{
       		index = input_buf[inx] - 'A' + 26;

			if(indexindex < 39)
        	{
        		input_buf[inx] = codex[index+13];
        	}
        	else if(index >= 39)
        	{
        		input_buf[inx] = codex[index-13];
        	}
        }
      std::cout << input_buf[inx] << "\t" << index << std::endl;
		
	    inx++;
	}
	std::cout << input_buf << std::endl;
	
	return 0;
}