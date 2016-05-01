
#include <testcase.hpp>
#include "testcase.pb.h"

int main(int c, char *argv[]) {
    TestInt64::Test msg;

    msg.set_i(0);
    write_to_file(msg, "data-zero.pbf");

    msg.set_i(1);
    write_to_file(msg, "data-pos.pbf");

    msg.set_i(-1);
    write_to_file(msg, "data-neg.pbf");

    msg.set_i(std::numeric_limits<int64_t>::max());
    write_to_file(msg, "data-max.pbf");

    msg.set_i(std::numeric_limits<int64_t>::min());
    std::string data = write_to_file(msg, "data-min.pbf");
}

