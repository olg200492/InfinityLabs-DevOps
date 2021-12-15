from math import sqrt
import unittest
from point import Point, ValueNotNumber

class PointTest(unittest.TestCase):
    def setUp(self):
        self.p = Point(1, 2)
    
    def testInit(self):
        self.assertEqual(self.p.x, 1.0)
        self.assertEqual(self.p.y, 2.0)
        self.assertRaises(ValueNotNumber, Point, 1, 'j')
        self.assertRaises(ValueNotNumber, Point, 'k', 'j')
        self.assertRaises(ValueNotNumber, Point, 'k', 2)
    
    def testDistance_from_origin(self):
        self.assertEqual(self.p.distance_from_origin(), sqrt(5))
    
if __name__ == '__main__':
    unittest.main()