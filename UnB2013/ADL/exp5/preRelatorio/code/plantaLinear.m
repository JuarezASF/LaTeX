a = 0.000181;
b = 0.0001125;
c = 0.001378;
k = c/a;

hN = [k*a/b];
hD = [1 c/b k*a/b];


freqs(hN,hD)

H = tf(hN, hD)

roots(hD)

gN = [a];
gD = [b c 0];

G =tf(gN, gD)

roots(gD)






