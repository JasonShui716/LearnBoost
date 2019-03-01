#include <iostream>
#include <boost/asio.hpp>
#include <boost/bind.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>

using namespace std;

void print(const boost::system::error_code&,
        boost::asio::deadline_timer* t, int* count){
    if(*count < 5){
        cout << *count << endl;
        ++(*count);
        t->expires_at(t->expires_at() + boost::posix_time::seconds(1));
        t->async_wait(boost::bind(print,
                boost::asio::placeholders::error, t, count));
    }
}


int main(){
    int count = 0;
    boost::asio::io_service io;
    boost::asio::deadline_timer t(io, boost::posix_time::seconds(1));
    t.async_wait(boost::bind(print,
            boost::asio::placeholders::error, &t, &count));
    io.run();
    cout << count << endl;
    return 0;
}