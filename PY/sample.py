import functools
class shity(object):
    @property
    def score(self):
        return self._score
    @score.setter
    def score(self,value):
        if not isinstance(value,int):
            raise ValueError('Score should be an integer')
        elif value<0 or value>100:
            raise ValueError('Should be between 0~100')
        self._score=value
class shake(object):
    def __getitem__(self,n):
        print('Life die')
class spicy(shity,shake):
    pass
s=spicy()
s[4]