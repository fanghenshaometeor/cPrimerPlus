/* hotel.h -- const definition and fucntion declaration in hotel.c */
#define QUIT	5
#define HOTEL1  80.00
#define HOTEL2  125.00
#define HOTEL3  155.00
#define HOTEL4  200.00
#define DISCOUNT 0.95
#define STARS "*******************************"

// show the seletion list
int menu (void);

// return the days preserved
int getnights (void);

// compute and display the price according to the star leve of the hotel and the days preserved
void showprice (double, int);
