#include <iostream>
#include "broc_out/kuihuar/up/proto/person.pb.h"
int main(int argc, const char * argv[]) {
    // insert code here...
    Person person;
	person.set_name("broc");
    person.set_id(1234);
    person.set_email("broc@baidu.com");
    std::cout << "Hello, World, and hi Broc!\n";
    return 0;
}