class Student
{
public:
	char   *FullName;
	char   CompleteAddress[120];
	char   Gender;
	double Age;

	bool   LivesInASingleParentHome;
};

void write();
void read();