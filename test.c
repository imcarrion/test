void function1()
{
	// to implement on next commits
	int z;
	// issue #01
	int i;
	for (i=0; i<10; i++)
		z = i + 5;
	return;
	// open the issue01
}

int function2(int z)
{
	if (z==7)
		return 2;
	else
		return 1;
}

int function3(int z)
{
	if (z > 1)
		return 1;
	else
		return 2;
}

int main(int argc, char*args[])
{
	int a;
	function1(); //bug!!
}
