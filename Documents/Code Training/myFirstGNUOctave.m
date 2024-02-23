clear;
t = [0:0.001:1];
fm = 5 * 3;
wm = 2 * pi * fm;

fc = 200;
wc = 2 * pi * fc;

ma = 1;

amp = 4;

am = amp * cos(wm * t);
subplot (1, 1, 1);
plot (t, am);
xlabel ('time');
ylabel = ('Amplitudo');
title = ('Sinyal Informasi Kelompok 6');

ac = cos (wc * t);
subplot (1, 1, 1);
plot (t, ac);

keluaran = am * ac;
subplot (1,1,1);
plot (t, keluaran);