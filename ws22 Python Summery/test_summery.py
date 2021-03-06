import unittest
from  summary import return_file_name, check_if_prime, lambda1, lambda2, increment_list ,remove_not_str_from_list

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
        
    def test_increment_list(self):
        ls = [1, 2, 3]
        increment_list(ls)
        self.assertListEqual(ls, [2, 3, 4])
        
    def test_remove_str_from_list(self):
        ls = ["o",1 ,3 ,4, "l", 8, (6,6) ,"g","a"]
        id1 = id(ls)
        remove_not_str_from_list(ls)
        id2 = id(ls)
        self.assertListEqual(ls, ["o", "l", "g" , "a"])
        self.assertEqual(id1, id2)
        
if __name__ == '__main__':
    unittest.main()
