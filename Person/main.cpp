#include "Person.h"
#include <cstdlib>

int getRandom(){
    return rand();
}



void changeLuck(Person& person1, Person& person2) {
    int cur = person1.getLuck();
    person1.setLuck(person2.getLuck());
    person2.setLuck(cur);
}
int main() {

    vector <Person> v;
    v.push_back(Person("Adil",18,getRandom()));
    v.push_back(Person ("Damir",24,getRandom()));
    v.push_back(Person ("Amir",21,getRandom()));
    v.push_back(Person("Danko",20,getRandom()));
    v.push_back(Person("Muha",30,getRandom()));
    int mx = -212, pos = -1;
    for(int i = 0 ; i < v.size(); ++i){
        cout << v[i].getName() << " " << v[i].getAge() << " " << v[i].getLuck()<<endl;
        int d = v[i].getLuck();
        if(mx < d){
            mx = d;
            pos = i;
        }
    }
    cout << "The luckiest person"<< " " << v[pos].getName() << " " << v[pos].getAge() << " " << v[pos].getLuck()<<endl;

    cout << "After changing the name of first and second person" << endl;
    changeLuck(v[0],v[1]);
    cout << v[0].getName() << " " << v[0].getAge() << " " << v[0].getLuck()<<endl;
    cout << v[1].getName() << " " << v[1].getAge() << " " << v[1].getLuck()<<endl;

    Person *first = new Person();
    /*
    The key difference between static and dynamic memory allocation is that in static
     memory allocation once the memory is allocated, the memory size is fixed while
     in dynamic memory allocation, once the memory is allocated, the memory size can be changed.
     */

    return 0;
}
