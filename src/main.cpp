#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World, and hi Broc!\n";
    return 0;
}
#include <stdio.h>
#include "broc_out/et/tools/app/proto/Person.pb.h"
int main()
{
	Person person;
	person.set_name("broc");
    person.set_id(1234);
    person.set_email("broc@baidu.com");
    printf('%s', "Hello, World, and hi Broc!\n");
    return 0;
}