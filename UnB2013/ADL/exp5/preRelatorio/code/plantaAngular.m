tau = 0.0254;
k = 1.5286;

hN = [k];
hD = [tau 1];


freqs(hN,hD)

H = tf(hN, hD)







