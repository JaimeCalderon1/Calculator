#include <iostream>
#include "Header.h"


int main()
{
	while (1)
	{
		switch (startProgram())
		{
			case 1:
				clear();
				std::cout << "What numbers do you want to add?" << std::endl;
				int uAdd1, uAdd2;
				std::cin >> uAdd1 >> uAdd2;
				clear();
				std::cout << uAdd1 << " + " << uAdd2 << " = " << addition(uAdd1, uAdd2) << std::endl;
				Sleep(2000);
				clear();
				break;
			case 2: 
				clear();
				std::cout << "What numbers do you want to subtract?" << std::endl;
				int uSub1, uSub2;
				std::cin >> uSub1 >> uSub2;
				clear();
				std::cout << uSub1 << " - " << uSub2 << " = " << sub(uSub1, uSub2) << std::endl;
				Sleep(2000);
				clear();
				break;
			case 3:
				clear();
				std::cout << "What numbers do you want to divide?" << std::endl;
				int uDiv1, uDiv2;
				std::cin >> uDiv1 >> uDiv2;
				clear();
				std::cout << uDiv1 << " / " << uDiv2 << " = " << divi(uDiv1,uDiv2) << std::endl;
				Sleep(2000);
				clear();
				break;
			case 4:
				clear();
				std::cout << "What numbers do you want to multiply?" << std::endl;
				int uMult1, uMult2;
				std::cin >> uMult1 >> uMult2;
				clear();
				std::cout << uMult1 << " * " << uMult1 << " = " << multip(uMult1,uMult2) << std::endl;
				Sleep(2000);
				clear();
				break;
				
		
		}
	}

}