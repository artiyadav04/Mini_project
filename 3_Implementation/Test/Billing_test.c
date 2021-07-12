#include "unity.h"
#include "Billing.h"

void setUp()
{
}

void tearDown()
{
}

void test_add(void)
{

	TEST_ASSERT_EQUAL(add("Anshika"));
}

void test_search(void)
{
	TEST_ASSERT_EQUAL(EXIST, search("Anshika"));
	TEST_ASSERT_EQUAL(DONT EXIST, search("Riya"));

	int main(void)
	{
		UNITY_BEGIN();

		RUN_TEST(test_add);
		RUN_TEST(test_search);

		return UNITY_END();
	}
