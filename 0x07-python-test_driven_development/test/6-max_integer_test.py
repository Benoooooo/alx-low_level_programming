#!/usr/bin/python3
"""Unittest for max_integer([..])
"""


import unittest
max_integer = _import_('6-max_integer').max_integer


class TestMaxInteger(unittest.TestCase):
    '''this class for test cases of the function max_integer'''

    def test_list_of_ints(self):
        '''tests with a list of integers'''
        self.assertEqual(max_integer([1, 2, 3]), 3)

    def test_list_of_floats(self):
        '''tests with a list of floats'''
        self.assertEqual(max_integer([1.5, 2.4, 3.1]), 3.1)

    def test_list_of_floats_max_mid(self):
        '''tests with a list of floats'''
        self.assertEqual(max_integer([1.5, 3.1, 2.1]), 3.1)

    def test_empty_list(self):
        '''tests with a empty list'''
        self.assertEqual(max_integer([]), None)

    def test_list_with_one_element(self):
        '''tests with a empty list'''
        self.assertEqual(max_integer([1]), 1)

    def test_list_of_negative_ints(self):
        '''tests with a list of negative integers'''
        self.assertEqual(max_integer([-1, -2, -3]), -1)

    def test_list_of_negative_floats(self):
        '''tests with a list of negative floats'''
        self.assertEqual(max_integer([-1.3, -2.4, -3.45]), -1.3)

    def test_list_of_strings(self):
        '''tests with a list of strings'''
        self.assertEqual(max_integer(['-1.3', '-2.4', '-3.45']), '-3.45')

    def test_list_of_booleans(self):
        '''tests with a list of booleans'''
        self.assertEqual(max_integer([True, False]), True)

    def test_none_argument(self):
        '''tests with a None argument'''
        with self.assertRaises(TypeError):
            max_integer(None)