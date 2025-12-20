


struct <structure_name/tag_name> {
	<datatype1> <variable1>;
	<datatype2> <variable2>;
	...
	...
	<datatypeN> <variableN>;
}<struct_variable1>,<struct_variable2>,.....<strut_variableN>;


struct employee{
	int id;
	char name[30];
	double salary;
}emp1, emp2, emp3;


struct employee{
	int id;
	char name[30];
	double salary;
};

struct {
	int id; // 4
	char name[30]; // 30
	double salary; // 8
}emp1, emp2, emp3;