// Importing library
import * as THREE from 'three';
import './style.css'
import { OrbitControls } from "three/examples/jsm/controls/OrbitControls";
import { GLTFLoader } from 'three/addons/loaders/GLTFLoader.js';
import gsap from "gsap"

// Function to set up and render the 3D scene
function init() {
  // Create Scene
  const scene = new THREE.Scene();
  scene.background = new THREE.Color(0x000000);


  // Creating Geometry
  const geometry = new THREE.SphereGeometry(3, 64, 64);
  const material = new THREE.MeshStandardMaterial({
    color: "#41ABF2",
  });
  const mesh = new THREE.Mesh(geometry, material);
  scene.add(mesh);

  // Adjusting Size
  const sizes = {
    width: window.innerWidth,
    height: window.innerHeight,
  };

  // Adding light
  const light = new THREE.PointLight(0xFFFFFF, 10, 100);
  scene.add(light);

  // Controling light position
  const lightPosition = new THREE.Vector3();

  // Adding a camera
  const camera = new THREE.PerspectiveCamera(45, sizes.width / sizes.height, 0.1, 100);
  camera.position.setZ(20);
  scene.add(camera);

  // Render scene in a canvas
  const canvas = document.querySelector(".webgl");
  const renderer = new THREE.WebGLRenderer({ canvas });
  renderer.setPixelRatio(window.devicePixelRatio);
  renderer.setSize(sizes.width, sizes.height);
  renderer.render(scene, camera);

  // Update resizer
  window.addEventListener("resize", () => {
    // Update Size
    sizes.width = window.innerWidth;
    sizes.height = window.innerHeight;

    // Update camera
    camera.aspect = sizes.width / sizes.height;
    camera.updateProjectionMatrix();
    renderer.setSize(sizes.width, sizes.height);
  });

  // Camera Control
  const controls = new OrbitControls(camera, canvas);
  controls.enablePan = false;
  controls.enableZoom = false;

  const loop = () => {
    controls.update();
    renderer.render(scene, camera);
    window.requestAnimationFrame(loop);
  }

  loop();

  // Adding timeline for smoothing
  const tl = gsap.timeline({ defaults: { duration: 1 } });
  // tl.fromTo(mesh.scale, { x: 0, y: 0, z: 0 }, { x: 1, y: 1, z: 1 });
  tl.fromTo("nav", { y: "-100%" }, { y: "0%" });
  tl.fromTo(".title", { opacity: 0 }, { opacity: 1 });

  // Mouse animation color
  let mouseDown = false;
  let rgb = [];
  window.addEventListener("mousedown", () => (mouseDown = true));
  window.addEventListener("mouseup", () => (mouseDown = false));

  window.addEventListener("mousemove", (e) => {
    // if (mouseDown) {
    //   rgb = [
    //     Math.round((e.pageX / sizes.width) * 255),
    //     Math.round((e.pageY / sizes.height) * 255),
    //     150
    //   ];

    //   // Animation
    //   let newColor = new THREE.Color(`rgb(${rgb.join(",")})`);
    //   gsap.to(mesh.material.color, {
    //     r: newColor.r,
    //     g: newColor.g,
    //     b: newColor.b
    //   });
    // }

    const mouseX = (e.clientX / sizes.width) * 2 - 1;
    const mouseY = -(e.clientY / sizes.height) * 2 + 1;

    // Atur posisi pencahayaan dengan jarak tertentu dari objek
    const lightDistance = 10; // Ganti dengan jarak yang diinginkan
    lightPosition.set(mouseX * lightDistance, mouseY * lightDistance, 5); // Sesuaikan nilai Z sesuai kebutuhan
    light.position.copy(lightPosition);
  });

  // // Update light position
  // window.onmousemove = function (ev) {
  //   // Light moves with cursor
  //   const mouseX = (ev.clientX / sizes.width) * 10 - 1;
  //   const mouseY = -(ev.clientY / sizes.height) * 10 - 1;
  //   console.log("X : " + mouseX);
  //   console.log("Y : " + mouseY);

  //   // Update light position
  //   lightPosition.set(mouseX, mouseY, 10);
  //   light.position.copy(lightPosition);
  // }
}

// Wait for the document to be fully loaded before initializing the 3D scene
window.addEventListener("DOMContentLoaded", init);
