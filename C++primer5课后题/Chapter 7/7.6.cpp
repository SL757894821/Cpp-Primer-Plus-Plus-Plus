#include <string>
#include <iostream>

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}
std::istream &read(std::istream &is, Sales_data &item)
{
	is >> item.bookNo >> item.units_sold >> item.sellingprice
		>> item.saleprice;
	if (is && item.sellingprice != 0)
		item.discount = item.saleprice / item.sellingprice;
	else
		item = Sales_data();	//��������������������
	return is;
}
std::ostream &print(std::ostream &os, const Sales_data &item)
{
	os << item.isbn() << " " << item.units_sold << " " << item.sellingprice
		<< " " << item.saleprice << "" << item.discount;
	return os;
}
