#define MAX_NAME_LEN  20
#define MAX_FNAME_LEN 30

typedef struct _Date
{
	int day, month, year;
} Date;

typedef struct _Person
{
	char  name[MAX_NAME_LEN  + 1];
	char fname[MAX_FNAME_LEN + 1];
	Date bdate;
} Person;
