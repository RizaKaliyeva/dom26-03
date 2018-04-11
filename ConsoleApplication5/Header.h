struct dates
{
	int year;
	int day;
	int month;
};

struct Tovar
{
	char *name;
	int  qnt;
	int price;
	dates *date;
};

struct MARSHRUT
{
	int num;
	char *startName;
	char *endName;
	int length;

};