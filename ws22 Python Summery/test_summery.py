import unittest
from  summary import return_file_name
class SummeryTest(unittest.TestCase):
    
    def test_return_file_name(self):
        self.assertEqual(return_file_name("/home/olga/Desktop/git-InfinityLabs/olga-lapovsky/ws22 Python Summery/file.txt"), "file.txt")
        self.assertEqual(return_file_name("/file.txt"), "file.txt")

if __name__ == '__main__':
    unittest.main()
