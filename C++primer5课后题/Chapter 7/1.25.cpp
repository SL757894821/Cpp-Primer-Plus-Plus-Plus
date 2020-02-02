#include<iostream>
#include"Sales_item.h"
int main(){
	Sales_item total, trans;
	std::cout << "请输入几条ISBN相同的销售记录：" << std::endl;
	if (std::cin >> total){
		while (std::cin >> trans)
		if (compareIsbn(total, trans)){
			total = total + trans;
		}
		else{
			std::cout << total << std::endl;
			total = trans;
		}
		std::cout << total << std::endl;
	}
	else{
		std::cerr << "没有数据" << std::endl;
		return -1;
	}
	system("pause");
	return 0;
}
