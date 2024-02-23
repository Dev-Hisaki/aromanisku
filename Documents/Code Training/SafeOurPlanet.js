import Phaser from 'phaser'
import Enemy from '../Ui/Enemy'
import ScoreLabel from '../Ui/Score'
import LifeLabel from '../Ui/lifeLabel'
export default class SafeOurPlanetScene extends Phaser.Scene
{
    constructor(){
        super('safe-out-planet-scene')
    }

    init() {
        // Game
        this.cloud = undefined
        this.cursor = undefined
        this.speed = 50
        this.surface = undefined
        this.scoreLabel = undefined
        this.lifeLabel = undefined

        // Player
        this.player = undefined
        
        // Enemy
        this.enemy1 = undefined
        this.enemy2 = undefined
        this.enemySpeedLeft = 75
        this.enemySpeedRight = -75
    }

    preload(){
        this.load.image('Sky', 'images/Sky.png')
        this.load.image('Sun', 'images/Sun.png')
        this.load.image('Cloud', 'images/Cloud.png')
        this.load.image('Surface', 'images/Surface.png')
        this.load.spritesheet('Tree', 'images/Tree.png', {
            frameWidth: 38, frameHeight: 71
        })
        this.load.spritesheet('Player', 'images/Player.png', {
            frameWidth: 22, frameHeight: 45
        })
        this.load.image('Enemy', 'images/Enemy.png')
    }

    create(){
        this.add.image(300, 450, 'Sky').setScale(2)
        this.add.image(300, 0, 'Sun').setScale(0.5)
        this.add.image(300, 410, 'Tree').setScale(2)

        this.surface = this.physics.add.staticGroup()
        this.surface.create(300, 580, 'Surface').setScale(2)
        this.cursor = this.input.keyboard.createCursorKeys()
        

        this.enemy1 = this.physics.add.group ({
            classType: Enemy,
            runChildUpdate: true
        })
        this.enemy2 = this.physics.add.group({
            classType: Enemy,
            runChildUpdate: true
        })

        this.time.addEvent({
            delay: 2000,
            callback: this.spawnGenerator,
            callbackScope: this,
            loop: true
        })




        this.scoreLabel = this.createScoreLabel(16, 16, 0)
        // BUAT METHOD HIT ENEMY DAN SKOR
        this.lifeLabel = this.createLifeLabel(230, 300, 10)
        // BAUT METHOD HIT ENEMY DAN TREE
    }

    update(time){
        // this.movePlayer(this.player)
    }

    /*createPlayer() {
        const player = this.physics.add.sprite(300, 450, 'Player')
        player.setCollideWorldBounds(true)

        this.anims.create({
            key: 'turn',
            frames: [{key: 'Player', frame: 0}]
        })
        this.anims.create({
            key:'right',
            frames: this.anims.generateFrameNumbers( 'Player', {
                start: 1, end: 3
            }),
            frameRate: 10,
            repeat: -1
        })
        this.anims.create({
            key:'left',
            frames: this.anims.generateFrameNumbers( 'Player', {
                start: 1, end: 3
            }),
            frameRate: 10,
            repeat: -1
        })
    }

    movePlayer(player) {
        if (this.cursor.right.isDown) {
            this.player.setVelocityX(this.speed)
            this.player.anims.play('right', true)
            this.player.setFlipX(false)
        }
        else if (this.cursor.left.isDown) {
            this.player.setVelocityX(this.speed*-1)
            this.player.anims.play('left', true)
            this.player.setFlipX(true)
        }
        else {
            this.player.setVelocityX(0)
            this.player.anims.play('turn', true)
        }
    }*/

    spawnEnemy1() {
        const enemy = this.enemy1.get(0, 0, 'Enemy')
        .setVelocityX(this.enemySpeedLeft).setScale(1.5)
        .on('pointerup',
        () => {
            enemy.setVelocityX(this.enemySpeedRight).setFlipX(true)
        })
        
        enemy.spawn(130)
    }

    spawnEnemy2() {
        const enemy = this.enemy2.get(0, 0, 'Enemy')
        .setVelocityX(this.enemySpeedRight)
        .setFlipX(true).setScale(1.5)
        .on('pointerup',
        () => {
            enemy.setVelocityX(this.enemySpeedLeft).setFlipX(false)
        })
        
        enemy.spawn(540)
    }

    spawnGenerator() {
        var RNG = Math.floor(Math.random()*4)

        if (RNG >= 3) {
            this.spawnEnemy1()
        }
        else {
            this.spawnEnemy2()
        }
    }

    createScoreLabel(x, y, score) {
        const style = {fontSize: '32px', fill: '#000'}
        const label = new ScoreLabel(this, x, y, score, style).setDepth(1)

        this.add.existing(label)
        return label
    }

    createLifeLabel(x, y, life) {
        const style = {fontSize: '32px', fill: '#000'}
        const label = new LifeLabel(this, x, y, life, style).setDepth(1)

        this.add.existing(label)
        return label
    }
}