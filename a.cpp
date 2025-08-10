template <template T>
T Add (T a, T b){
    return (a+b);
} 


template <template T>
class Example {
    public:
      Void Add (T a, T b){
         return (a+b);
      }
}


template <template T>
T maxValue (T a, T b){
    return (a>b)? a:b ;
} 


#include <cstdio>
#include <memory>
int main() {
    std::unique_ptr <FILE, decltype(&fclose)> file_ptr (fopen("data.txt", "r"));
    if (file_ptr){
        fclose(FILE);
    }
    return 0;
}


v.erase(std::remove_if(v.begin(), v.end(), [] (int x){
    return (x % 2 == 0)}), v.end());


#include <thread>
void worker (int id) {}
int main() {
    std::thread T1 (worker, 1);
    std::thread T2 (worker, 2);
    T1.join();
    T2.join();

    return 0;
}


int counter = 0;
void increment(){
    ++counter;
}


#include <mutex>
int counter = 0;
std::mutex mtx;
void increment(){
    std::lock_guard <std::mutex> lock (mtx);
    ++counter;
}