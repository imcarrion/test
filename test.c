void function1()
{
	// to implement on next commits
	int z;
	// issue #01
	int i;
	for (i=0; i<10; i++)
		z = i + 5;
	return;
}

void function2()
{}

int main(int argc, char*args[])
{
	int a;
	function1(); //bug!!
}
