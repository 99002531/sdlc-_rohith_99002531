#include "unity.h"
#include "sdlc.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_insert_details(void)
{
  TEST_ASSERT_EQUAL(0,insert_details("8.5","go","2016",200);   //success

}
void test_find(void)
{
  TEST_ASSERT_EQUAL(0,find("Avengers"));   //success

}
void test_viewAll(void)
{
  TEST_ASSERT_EQUAL(0,viewAll()); //sucees

}

void test_subscriptions(void)
{
  TEST_ASSERT_EQUAL(0,subscriptions("Avengers","ram","362645959",2));

}

void test_old_record(void)
{
  TEST_ASSERT_EQUAL(0,old_record());

}


int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_insert_details);
  RUN_TEST(test_find);
   RUN_TEST(test_viewAll);
  RUN_TEST(test_subscriptions);
   RUN_TEST(test_old_record);



  /* Close the Unity Test Framework */
  return UNITY_END();
}
