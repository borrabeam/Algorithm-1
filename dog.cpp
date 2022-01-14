// #include <iostream>
// #include <iomanip>
// using namespace std;

//   struct Dog {
//   int age;
//   double weight;
//   double speed;
// };

// bool heavier(Dog d1, Dog d2) {
//     if (d1.weight > d2.weight)
//         return true;
//     else
//     {
//         return false;
//     }
    

  
// }

// Dog read_dog()
// {
//   Dog d;
//   cin >> d.age >> d.weight >> d.speed;
//   return d;
// }

// int main()
// {
//   Dog dang = read_dog();
//   Dog dum = read_dog();
//   if(heavier(dang, dum)) {
//     cout << "Dang is heavier" << endl;
//   } else {
//     cout << "Dang is not heavier" << endl;
//   }
// }

// ----------------------------------

// 2

// #include <iostream>
// #include <iomanip>
// using namespace std;

//   struct Dog {
//   int age;
//   double weight;
//   double speed;
// };

// double run_time(Dog d, double distance) {
//   double a = distance/d.speed;
//   return a;

// }

// Dog read_dog()
// {
//   Dog d;
//   cin >> d.age >> d.weight >> d.speed;
//   return d;
// }

// int main()
// {
//   Dog dang = read_dog();
//   double distance;
//   cin >> distance;
//   cout << fixed << setprecision(5);  // this line is for formatting
//   cout << run_time(dang, distance) << endl;
// }

// --------------------------------

// 3

#include <iostream>
#include <iomanip>
using namespace std;

  struct Dog {
  int age;
  double weight;
  double speed;
};

double run_time(Dog d, double distance) {
  double a = distance/d.speed;
  return a;
}

void double_speed(Dog* d) {
  d->speed *= 2;
}

Dog read_dog()
{
  Dog d;
  cin >> d.age >> d.weight >> d.speed;
  return d;
}

int main()
{
  Dog dang = read_dog();
  double distance;
  cin >> distance;
  cout << fixed << setprecision(5) << run_time(dang, distance) << endl;
  double_speed(&dang);
  cout << run_time(dang, distance) << endl;
}