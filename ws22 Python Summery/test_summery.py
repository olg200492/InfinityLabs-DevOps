import unittest
from  summary import return_file_name, check_if_prime, lambda1, lambda2

class SummeryTest(unittest.TestCase):
    
    def test_return_file_name(self):
        self.assertEqual(return_file_name("/home/olga/Desktop/git-InfinityLabs/olga-lapovsky/ws22 Python Summery/file.txt"), "file.txt")
        self.assertEqual(return_file_name("/file.txt"), "file.txt")

    def test_check_if_prime(self):
        self.assertRaises(TypeError, check_if_prime, "olga")
        self.assertRaises(TypeError, check_if_prime, 1.22)
        self.assertEqual(check_if_prime(-100), False)
        self.assertEqual(check_if_prime(0), False)
        self.assertEqual(check_if_prime(1), False)
        self.assertEqual(check_if_prime(2), True)
        self.assertEqual(check_if_prime(227), True)
        self.assertEqual(check_if_prime(100), False)

    def test_lambda1(self):
        self.assertEqual(lambda1(2), 4)
        self.assertEqual(lambda1(0), 0)
        self.assertEqual(lambda1(-2), 4)
        self.assertEqual(lambda1(-3), 9)
        
    def test_lambda2(self):
        self.assertEqual(lambda2(2, 2), 4)
        self.assertEqual(lambda2(0 ,1), 1)
        self.assertEqual(lambda2(-2 ,-6), -8)
        self.assertEqual(lambda2(2.5, 0.5), 3)

if __name__ == '__main__':
    unittest.main()
