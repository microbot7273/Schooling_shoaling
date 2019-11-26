#ifndef FOOD
#define FOOD
class food{
  public:
    food();//class constructor
    double food_location[];//location of the food source
    double food_size;//size of the food source

};
food::food(){
    food_location[0] = 100*rand();//initializing the food location
    food_location[1] = 100*rand();
    food_size = 20*rand();//initializing the food size


}


#endif // FOOD

