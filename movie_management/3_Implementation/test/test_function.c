#include "unity.h"
#include "canteen.h"

//Required by the test unity framework
void setUp() {}

//Required by the unity framework
void tearDown() {}

void testing_insert(void)
{
  TEST_ASSERT_EQUAL(0,find("Avengers"));   //success
}
void testing_find(void)
{
     TEST_ASSERT_EQUAL(0,find("Avengers"));   //success
}
void testing_viewall(void)
{
   TEST_ASSERT_EQUAL(0,viewAll()); //sucees 
}
void testing_subscriptions(void)
{
    TEST_ASSERT_EQUAL(0,subscriptions("Avengers","ram","362645959",2));

}
void testing_old_record(void)
{
   TEST_ASSERT_EQUAL(0,old_record());
}

int main(void)
{
    //Initiating the unity framework
    UNITY_BEGIN();
    RUN_TEST(testing_insert);
    RUN_TEST(testing_find);
    RUN_TEST(testing_viewall);
    RUN_TEST(testing_subscriptions);
    RUN_TEST(testing_old_record);
    return UNITY_END();
}
