#include "dweetApi.hpp"

DweetApi dweet;
int main(int argc, char **argv)
{
 cout << "DweetWriter" << endl;
 dweet = DweetApi();
 dweet.setup("sensor-monitor-4465");
 dweet.push("temp=25");

 return 0;
}
