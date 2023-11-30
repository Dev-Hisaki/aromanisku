<?php

namespace App\Controllers;

use App\Models\aromaniskuModel;

class Produk extends BaseController
{
    protected $produkModel;
    public function __construct()
    {
        $this->produkModel = new aromaniskuModel();
    }
    public function index()
    {
        $produk = $this->produkModel->findAll(); // SELECT * FROM aromanisku
        $data = [
            'title' => 'Our Products',
            'produk' => $produk
        ];

        // Cara konek db tanpa model
        // $db = \Config\Database::connect();
        // $produk = $db->query("SELECT * FROM produk");
        // foreach ($produk->getResultArray() as $row) {
        //     d($row);
        // }

        return view('produk/index', $data);

    }
    public function detail($slugProduk)
    {
        echo $slugProduk;
    }

    public function test()
    {
        echo "Pinjem dulu seratus!";
    }

    function arrow()
    {
        echo "Hello Dicoding!!!";
        echo "Haidar";
    }
}
