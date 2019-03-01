#include <iostream>
#include <boost/asio.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>

using namespace std;

void print(const boost::system::error_code&){
    cout << "print print" << endl;
}


int main(){
    boost::asio::io_service io;
    boost::asio::deadline_timer t(io, boost::posix_time::seconds(5));
    t.async_wait(&print);
    io.run();
    cout << "asio test" << endl;
    return 0;
}