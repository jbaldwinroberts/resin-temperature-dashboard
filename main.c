// #include <stdio.h>

// main()
// {
// 	printf("Hello, world!\n");
// 	return 0;
// }

#include "dweetApi.hpp"

DweetApi dweet;
int main(int argc, char **argv)
{
 cout << "DweetWriter" << endl;
 dweet = DweetApi();
 dweet.setup("sensor-monitor-4465");
 dweet.push("temp=30");

 return 0;
}
