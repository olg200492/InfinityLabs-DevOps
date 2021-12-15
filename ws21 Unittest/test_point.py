from math import sqrt
import unittest
from point import Point, ValueNotNumber

class PointTest(unittest.TestCase):
    def setUp(self):
        self.p1 = Point(1, 2)
        self.p2 = Point(3, 4)
    
    def testInit(self):
        self.assertEqual(self.p1.x, 1.0)
        self.assertEqual(self.p1.y, 2.0)
        self.assertRaises(ValueNotNumber, Point, 1, 'j')
        self.assertRaises(ValueNotNumber, Point, 'k', 'j')
        self.assertRaises(ValueNotNumber, Point, 'k', 2)
    
    def testDistance_from_origin(self):
        self.assertEqual(self.p1.distance_from_origin(), sqrt(5))
    
    def testAdd(self):
        p3 = self.p1 + self.p2
        self.assertEqual(p3.x, 4)
        self.assertEqual(p3.y, 6)
    
if __name__ == '__main__':
    unittest.main()